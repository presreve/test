using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Xml.Linq;

namespace _0.程序设计作业
{
    internal class Student  //Student类
    {
        public Student(string name,int grade)  
        {
            this.Name = name;
            this.Grade = grade;
        }
        private string _name; //Student类中的两个字段
        public string Name   //字段的属性
        {
            get { return _name; }
            set { _name = value; }
        }
        private int _grade;
        public int Grade
        {
            get { return _grade; }
            set { _grade = value; }
        }
        private char _gender;
        public char Gender
        {
            get { return _gender; }
            set { _gender = value; }
        }

        public Student()
        {
            
        }
        public void Get()
        {
            Console.WriteLine("我叫{0}，我分数是{1}分,我是{2}生。", this.Name, this.Grade,this.Gender);
        }
    }
}
