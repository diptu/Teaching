### LAB-Week 03 (Part A)
**Activity 01:**
Write a query to display the last name, department number, and department name for
all employees.

~~~~SQL
SELECT e.lname, e.dept_id, d.name
from employees e
join departments d
on e.dept_id = d.id;
~~~~

**Activity 02:**
Write a query to display the employee last name, department name, location ID, and city of all employees who earn a commission.
~~~~SQL
SELECT e.lname, d.name,l.id as "Location ID", l.city
from employees e
join departments d
on e.dept_id = d.id
join locations l
on l.id = d.location_id
WHERE commission_pct is not null;
~~~~

### LAB-Week 03 (Part B)

**Activity 01:**
Write a query to display the last name, job, department number, and department name for all employees who work in Toronto.
~~~~SQL
SELECT e.lname, e.job_id, e.dept_id, d.name
FROM employees e
join departments d
ON e.dept_id = d.id
join locations l
on l.id = d.location_id
WHERE l.city = 'Toronto';
~~~~
**Activity 02:**
Display the last name, salary, and commission for all employees who earn commissions. Sort data in descending order of salary and commissions and Title.
~~~~SQL
SELECT lname, salary, commission_pct
FROM employees
WHERE commission_pct is not null
ORDER by commission_pct, job_id DESC;
~~~~

**Activity 03:**
Display the employee last name and employee number along with their manager’s last name and manager number. Label the columns Employee, Emp#, Manager, and Mgr#,
respectively.
~~~~SQL
SELECT
	e.lname as "Employee", e.id as "EMP#",
	m.lname as "Manager", m.id as "Mgr#"
from employees e
join employees m
on e.manager_id = m.id ;
~~~~
