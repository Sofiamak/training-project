CREATE TABLE  School (
    TeacherID   INT  NOT NULL AUTO_INCREMENT,
   `teacher_name` VARCHAR (255)  NOT NULL,
   `age` INT          NOT NULL,
   `country`     VARCHAR (255)  ,
   `education` VARCHAR (255) ,
   `date_created` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
   `date_update`  TIMESTAMP NULL,
    PRIMARY KEY (TeacherID)
);
