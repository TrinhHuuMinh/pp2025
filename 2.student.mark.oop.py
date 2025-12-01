class Student:
       
  def __init__(self):
        self.__id = ""
        self.__name = ""
        self.__dob = ""
        self.__marks = {}
def input_info(self):
        self.__id = input("Enter Student ID: ")
        self.__name = input("Enter Student Name: ")
        self.__dob = input("Enter Student DoB (DD/MM/YYYY): ")
    
def set_mark(self, course_id,mark):
    self.__marks[course_id] = mark

def get_id(self):
    return self.__id 

def get_name(self):
    return self.__name

def get_dob(self):
    return self.__dob

def get_marks(self, course_id):
    return self.__mark.get(course_id,"N/A")

def __str__(self):
    return f"ID: {self.__id} | Name:{self.__name} | DoB:{self.__}"
    
    
class Course:
    def __init__(self):
        self.__id = ""
        self.__name =""
    def input_info(self):
        self.__id = input("Enter Course ID: ")
        self.__name = input("Enter Course Name: ")
        