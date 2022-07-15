/* Normal Database Design of the website and software 
   Copyright (c) 2012 BASURA. All rights reserved.
   amuthupuwath@gmail.com, 07580172 */
CREATE DATABASE mstud;
USE mstud;

CREATE TABLE temps(
	scode			VARCHAR(65)	NOT NULL,
	username		VARCHAR(65) NOT NULL,
	password		VARCHAR(25) NOT NULL,
	email			VARCHAR(65) NOT NULL,
	fname			VARCHAR(30) NOT NULL,
	lname			VARCHAR(30) NOT NULL,
	sex				VARCHAR(1)	NOT NULL,
	sname			VARCHAR(60) NOT NULL,
	dob				DATE		NOT NULL,
	PRIMARY KEY (scode));
	
CREATE TABLE downcount(
	dno				INT NOT NULL AUTO_INCREMENT,
	total	INT(5) NOT NULL,
	PRIMARY KEY (dno));

CREATE TABLE userinfo(
	uno				INT NOT NULL AUTO_INCREMENT,
	username		VARCHAR(65) NOT NULL,
	password		VARCHAR(25) NOT NULL,
	email			VARCHAR(65) NOT NULL,
	PRIMARY KEY (uno, username));
ALTER TABLE `userinfo` ADD INDEX ( `username` );
	
CREATE TABLE userpersonal(
	username	VARCHAR(65) NOT NULL,
	fname		VARCHAR(30) NOT NULL,
	lname		VARCHAR(30) NOT NULL,
	sex			VARCHAR(1)	NOT NULL,
	sname		VARCHAR(60) NOT NULL,
	dob			DATE		NOT NULL,
	friendR		INT(2),
	PRIMARY KEY (username),
	FOREIGN KEY (username) REFERENCES userinfo(username));
	
CREATE TABLE examprogress(
	eNO			INT NOT NULL AUTO_INCREMENT,
	username	VARCHAR(65) NOT NULL,
	examName	VARCHAR(10)	NOT NULL,
	marksC		INT(3)		NOT NULL,
	marksL		INT(3)		NOT NULL,
	status		VARCHAR(1)	NOT NULL,
	PRIMARY KEY(eNo),
	FOREIGN KEY (username) REFERENCES userinfo (username));
	
CREATE TABLE friends(
	username		VARCHAR(65) NOT NULL,
	friend			VARCHAR(65) NOT NULL,
	confirm			VARCHAR(1)	NOT NULL,
	Primary Key(username, friend),
	FOREIGN KEY (username) REFERENCES userinfo(username));
	
CREATE TABLE friendchat(
	username		VARCHAR(65) NOT NULL,
	online			VARCHAR(1)	NOT NULL,
	Primary KEY (username),
	FOREIGN KEY (username) REFERENCES userinfo(username));