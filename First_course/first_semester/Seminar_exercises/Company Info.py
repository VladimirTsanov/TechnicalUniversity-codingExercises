class Employee:
    def __init__(self, name, position, salary):
        self.name = name
        self.position = position
        self.salary = salary
    def display_info(self):
        print(f"The employee's name: {self.name}, position: {self.position}, salary: {self.salary} lv")
class Manager(Employee):
    def __init__(self, name, position, salary, department):
        super().__init__(name, position, salary)
        self.department = department
    def calculate_bonus(self):
        manager_bonus = 0.1*self.salary + 1000
        print(f"Manager's salary bonus is: {manager_bonus} lv.")
    def display_info(self):
        print(f"The employee's name: {self.name}, position: {self.position}, salary: {self.salary}, department:{self.department}")
class Developer(Employee):
    def __init__(self, name, position, salary, programming_languages):
        super().__init__(name, position, salary)
        self.programming_languages = programming_languages
    def calculate_bonus(self):
        developer_bonus = 0.15*self.salary + 200 * len(self.programming_languages)
        print(f"Developer's salary bonus is: {developer_bonus} lv.")
    def display_info(self):
        print(f"The employee's name: {self.name}, position: {self.position}, salary: {self.salary}, familiar languages: "
              f"{', '.join(self.programming_languages)}")
class Company:
    def __init__(self):
        self.employees = []

    def add_employee(self, employee):
        self.employees.append(employee)

    def total_salary_expense(self):
        total_expense = sum(employee.salary for employee in self.employees)
        print(f"Total salary expense: {total_expense} lv.")

    def display_all_employees(self):
        print("All employees in the company:")
        for employee in self.employees:
            employee.display_info()

employee = Employee("Ivan", "Developer", 4500)
employee.display_info()

manager = Manager("Ivan", "Manager", 5000, "IT")
manager.calculate_bonus()

developer = Developer("Maria", "Developer", 4000, ["Python", "JavaScript"])
developer.calculate_bonus()

company = Company()
company.add_employee(manager)
company.add_employee(developer)
company.display_all_employees()
company.total_salary_expense()
