CREATE TABLE  `billing` (
   `ID`   BIGINT UNSIGNED NOT NULL AUTO_INCREMENT,
   `amount` VARCHAR (255)  NOT NULL,
   `currency` VARCHAR (255)  NOT NULL,
   `user_id`  BIGINT  UNSIGNED  NULL,
   `date_created` TIMESTAMP NOT NULL DEFAULT CURRENT_TIMESTAMP,
   `date_update`  TIMESTAMP NULL,
    PRIMARY KEY (`ID`),
    INDEX `idx_fk_user`(`user_id` ASC),
    CONSTRAINT `idx_fk_user`
    FOREIGN KEY (`user_id`)
    REFERENCES content(`ID`)
    ON DELETE NO ACTION
    ON UPDATE NO ACTION
)ENGINE = InnoDB;