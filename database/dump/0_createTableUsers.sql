CREATE TABLE  Users (
    UserID   INT  NOT NULL AUTO_INCREMENT,
   `first_name` VARCHAR (255)  NOT NULL,
   `last_name` VARCHAR (255)  NOT NULL,
   `username` VARCHAR (255)  NOT NULL,
   `pasword` VARCHAR (255)  NOT NULL,
   `age` INT          NOT NULL,
   `country`     VARCHAR (255)  ,
   `passport`    VARCHAR (255)  NOT NULL,
   `date_created` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
   `date_update`  TIMESTAMP NULL,
    PRIMARY KEY (UserID)
);