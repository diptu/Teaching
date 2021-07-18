### <span style="color:tomato"> *NORMALIZATION*</span>

Suppose in our employee schema we want to store
multiple email address along with their mailing address
One of the student come up with the idea of something like this
What do you think is it a good design?
~~~~SQL

CREATE TABLE `employees1` (
  `id` int(11) NOT NULL,
  `fname` varchar(20) DEFAULT NULL,
  `lname` varchar(20) NOT NULL,
  `email` varchar(250) NOT NULL,
  `phone` varchar(20) DEFAULT NULL,
  `hire_date` date NOT NULL,
  `job_id` varchar(20) NOT NULL,
  `salary` decimal(10,2) DEFAULT NULL,
  `commission_pct` decimal(4,2) DEFAULT NULL,
  `manager_id` int(11) DEFAULT NULL,
  `dept_id` int(11) DEFAULT NULL,
  `address` varchar(250)
  );

INSERT INTO `employees1` (`id`, `fname`, `lname`, `email`, `phone`, `hire_date`, `job_id`, `salary`, `commission_pct`, `manager_id`, `dept_id`, `address`) VALUES
(100, 'Steven', 'King', 'SKING@GMAIL.COM', '515.123.4567', '2006-06-17', 'AD_PRES', '24000.00', NULL, NULL, 90, '2014 Jabberwocky Rd, 26192, Southlake, Texas, US'),
(100, 'Steven', 'King', 'SKING@OUTLOOK.COM', '515.123.4567', '2006-06-17', 'AD_PRES', '24000.00', NULL, NULL, 90, '2014 Jabberwocky Rd, 26192, Southlake, Texas, US'),
(100, 'Steven', 'King', 'SKING@HOTMAIL.COM', '515.123.4567', '2006-06-17', 'AD_PRES', '24000.00', NULL, NULL, 90, '2014 Jabberwocky Rd, 26192, Southlake, Texas, US'),
(101, 'Neena', 'Kochar', 'NKOCHAR@GMAIL.COM', '515.123.4568', '2008-09-21', 'AD_VP', '17000.00', NULL, 100, 90, '2004 Charade Rd, 98199, Seattle, Washington, US'),
(101, 'Neena', 'Kochar', 'NKOCHAR@ABC.EDU', '515.123.4568', '2008-09-21', 'AD_VP', '17000.00', NULL, 100, 90, '2004 Charade Rd, 98199, Seattle, Washington, US'),
(102, 'Lex', 'De Haan', 'DEHAAN@GMAIL.COM', '515.123.4569', '2009-01-13', 'AD_VP', '17000.00', NULL, 100, 90, '460 Bloor St. W., ON M5S 1X8, Toronto, Ontario, CA'),
(103, 'Alexander', 'Hunold', 'AHUNOLD@GMAIL.COM', '590.423.4567', '2008-01-03', 'IT_PROG', '9000.00', NULL, 102, 60, 'Magdalen Centre- The Oxford Sc. Park, OX9 9ZB, OXford, Oxford, UK');

~~~~
**<code><b>Few issues:</b></code>**

    1. id can't be a primary key anymore.
    2. duplicate data.
    3. valid string search using like operator could be difficult/impossible.

**<code><b>1NF: 1st Normal Form</b></code>**
      -- Every column must be atomic.
~~~~SQL
CREATE TABLE `employees` (
    `id` INT(11) PRIMARY KEY AUTO_INCREMENT,
    `fname` VARCHAR(20) DEFAULT NULL,
    `lname` VARCHAR(20) NOT NULL,
    `phone` VARCHAR(20) DEFAULT NULL,
    `hire_date` DATE NOT NULL,
    `job_id` VARCHAR(20) NOT NULL,
    `salary` DECIMAL(10 , 2 ) DEFAULT NULL,
    `commission_pct` DECIMAL(4 , 2 ) DEFAULT NULL,
    `manager_id` INT(11) DEFAULT NULL,
    `dept_id` INT(11) DEFAULT NULL
);


INSERT INTO `employees` ( `id`, `fname`, `lname`, `phone`, `hire_date`, `job_id`, `salary`, `commission_pct`, `manager_id`, `dept_id`) VALUES
(100, 'Steven', 'King',  '515.123.4567', '2006-06-17', 'AD_PRES', '24000.00', NULL, NULL, 90),
(101, 'Neena', 'Kochar',  '515.123.4568', '2008-09-21', 'AD_VP', '17000.00', NULL, 100, 90),
(102, 'Lex', 'De Haan',  '515.123.4569', '2009-01-13', 'AD_VP', '17000.00', NULL, 100, 90),
(103, 'Alexander', 'Hunold', '590.423.4567', '2008-01-03', 'IT_PROG', '9000.00', NULL, 102, 60);


CREATE TABLE emails (
    id INT(11) PRIMARY KEY AUTO_INCREMENT,
    email VARCHAR(30) NOT NULL,
    employee_id INT(11) NOT NULL,
    FOREIGN KEY (employee_id)
        REFERENCES employees (id)
);


INSERT INTO emails(email,employee_id) VALUES
	('SKING@GMAIL.COM',100),
	('SKING@OUTLOOK.COM',100),
	('SKING@HOTMAIL.COM',100),
	('NKOCHAR@GMAIL.COM',101),
	('NKOCHAR@ABC.COM',101),
	('DEHAAN@GMAIL.COM',102),
	('AHUNOLD@GMAIL.COM',103);


CREATE TABLE addresses (
    id INT(11) PRIMARY KEY AUTO_INCREMENT,
    street_address VARCHAR(50) DEFAULT NULL,
    postal_code VARCHAR(12) DEFAULT NULL,
    city VARCHAR(25) NOT NULL,
    state_provinence VARCHAR(25) DEFAULT NULL,
    country_id VARCHAR(2) DEFAULT NULL,
    employee_id INT(11) NOT NULL,
    FOREIGN KEY (employee_id)
        REFERENCES employees (id)
);

INSERT INTO `addresses` ( `street_address`, `postal_code`, `city`, `state_provinence`, `country_id`,`employee_id`) VALUES
('2014 Jabberwocky Rd', '26192', 'Southlake', 'Texas', 'US',100),
('2004 Charade Rd', '98199', 'Seattle', 'Washington', 'US',101),
( '460 Bloor St. W.', 'ON M5S 1X8', 'Toronto', 'Ontario', 'CA',102),
('Magdalen Centre- The Oxford Sc. Park', 'OX9 9ZB', 'OXford', 'Oxford', 'UK',103);

~~~~
