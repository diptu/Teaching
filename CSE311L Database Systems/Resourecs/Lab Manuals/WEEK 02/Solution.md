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
