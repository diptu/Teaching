### LAB-Week 02 (Part A)
**Activity 01:**
Write a query that displays the last name , weekly salary, department number of the employees. Name the salary column as "Weekly Salary".
![Employee Data](employees_data.jpg "Sample Employees data")
~~~~SQL
SELECT LAST_NAME, ROUND((SALARY*12)/52,2) AS "Weekly Salary", DEPTARTMENT_ID
FROM EMPLOYEES;
~~~~

### LAB-Week 02 (Part B)
**Activity 02:**
Write a query that displays the last name concatenated with the job ID, separated by a comma and space, and name the column Employee and Title.
~~~~SQL
SELECT CONCAT(LAST_NAME,", ", JOB_ID) as "Employee and Title"
FROM EMPLOYEES;
~~~~

### LAB-Week 02 (Part C)
**Activity 01:**
Display the employee last name, job ID, and start date of employees hired between February 20, 1998, and May 1, 1998. Order the query in ascending order by start date.
![Employees Data](employees_data.jpg "Employees sample data")
~~~~SQL
SELECT LAST_NAME, JOB_ID, HIRE_DATE
FROM EMPLOYEES
WHERE HIRE_DATE BETWEEN '1998-02-02' AND '1998-05-01'
~~~~

**Activity 02:**
Display the last name and department number of all employees in departments 20 and 50 in alphabetical order by name.
~~~~SQL
SELECT LAST_NAME, DEPTARTMENT_ID
FROM EMPLOYEES
WHERE DEPTARTMENT_ID IN (20,50)
ORDER BY LAST_NAME
~~~~
### LAB-Week 02 (Part D)

**Activity 01:**
Display the last name and hire date of every employee who was hired in 1994.

~~~~SQL
SELECT LAST_NAME, HIRE_DATE
FROM EMPLOYEES
WHERE HIRE_DATE like '1994-__-__'
~~~~

**Activity 02:**
Display the last name, salary, and commission for all employees who earn commissions. Sort data in descending order of salary and commissions.

~~~~SQL
SELECT LAST_NAME, SALARY, COMMISSION_PCT
FROM EMPLOYEES
WHERE COMMISSION_PCT IS NOT NULL
ORDER BY SALARY DESC,COMMISSION_PCT DESC
~~~~

**Activity 03:**
Display the last name of all employees who have an a and an e in their last name.

~~~~SQL
SELECT LAST_NAME
FROM EMPLOYEES
WHERE LAST_NAME LIKE '%a%' and '%e%';
~~~~
