all: restart

create: main.cpp
	g++ -c main.cpp -o bin/main.o
	g++ -c app/models/userregister.cpp -o bin/userregister.o
	g++ -c app/models/userpayment.cpp -o bin/userpayment.o
	g++ -c app/models/userinformation.cpp -o bin/userinformation.o
	g++ -c app/models/userauth.cpp -o bin/userauth.o
	g++ -o main bin/userpayment.o bin/userregister.o bin/userinformation.o bin/userauth.o bin/main.o  -I.. -lpthread  `mysql_config --libs`

clean:
	rm -rf bin/*.o	
	rm -rf main

run: create
	./main

restart: clean  run

##################PARAM########################
################################################
IMAGE_DATABASE= mysql/mysql-server:5.7
TAG_BD=mysql
TAG_WEB=web

DEV_DATABASE_PASS=pass
DEV_DATABASE_NAME=web
DEV_DATABASE_USER=user


#####################IMAGES#########################
image_db:
	docker build -f docker/Dockerfile.mysql -t $(IMAGE_DATABASE) .

###################################################
####################MYSQL##########################

$(TAG_BD)_containerrun:image_db
	docker stop $@ || echo
	@echo
	@echo '========================================================'
	@echo '||          STARTING DATABASE SERVER                  ||'
	@echo '||                                                    ||'
	@echo '|| Run "make mysql-client" to start MySQL CLI         ||'
	@echo '========================================================'
	@echo
	docker run \
		-d \
		--rm \
		--name $@ \
			-e MYSQL_ROOT_PASSWORD=$(DEV_DATABASE_PASS) \
			-e MYSQL_DATABASE=$(DEV_DATABASE_NAME) \
			-e MYSQL_USER=$(DEV_DATABASE_USER)	\
			-e MYSQL_PASSWORD=$(DEV_DATABASE_PASS) \
			-p 3326:3306 \
			$(IMAGE_DATABASE)
			@echo 'Waiting 15s for database to be initialized...'
			@sleep 15



#mysql -uroot -ppass
#show databases;
#use web;
#show tables;
mysql_exec:
	docker exec -it mysql_containerrun bash
