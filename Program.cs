using System;
using System.Collections.Generic;
using System.Linq;
using System.Runtime.CompilerServices;
using System.Security.Cryptography.X509Certificates;
using System.Text;
using System.Threading.Tasks;

namespace _0._0程序设计静态作业
{
   public  class Program
    {
        private static int _age;
        private Program(int age) //类的构造为私有
        {
            _age = 10;
        }
        static void Main(string[] args)
        {
            Program  op = new Program(0);  //类的实例对象
            Program.Haha();
            Console.ReadKey();
        }
        public static void Haha()   //静态方法
        {
            Console.WriteLine(_age);
        }
    }
}
