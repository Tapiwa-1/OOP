# object is an entity that has state and behavior(functionality)
# Object is a runtime entity, it is created at runtime
class student:
    def __init__(self, id, name, salary):
        self.id = id
        self.name = name
        self.salary = salary

    def display(self):  # this is a method because it is a funtion within a class
        print(self.id, self.name, self.salary)


s1 = student(123, "Tapiwa", 12.3)
s2 = student(124, "Tricker", 13.3)
s1.display()
s2.display()
