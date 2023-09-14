using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _23.数组的5个练习
{
    internal class Program
    {
        static void Main(string[] args)
        {
            #region 数组练习1
            ////练习1，从一个整数组中求出最大值，最小值，总和，平均值
            //int[] nums = { 001, 2, 3, 4, 5, 6, 7, 8, 9 };
            //int max = int.MinValue;//nums[0];
            //int min = int.MaxValue;//nums[1];
            //int sum = nums[2];
            //for (int i = 0; i < nums.Length; i++)
            //{
            //    if (nums[i] > max)
            //    {
            //        max = nums[i];
            //    }
            //    if (nums[i] < min)
            //    {
            //        min = nums[i];
            //    }
            //    sum += nums[i];


            //}
            //Console.WriteLine("最大值是{0}，最小值是{1}，总和是{2}，平均值是{3}", max, min, sum, sum / nums.Length);
            //Console.ReadKey(); 
            #endregion

            #region   数组练习3
            ////练习3
            //string str = null;
            //string[] name = { "老杨", "老朱", "老虎", "老牛", "老赵" };
            //for (int i = 0; i < name.Length-1; i++)
            //{
            //    str += name[i] + "|";
            //}
            //Console.WriteLine(str + name[name.Length-1]);
            //Console.ReadKey(); 
            #endregion

            #region 数组练习4
            ////练习4，使大于0的加1，小于0的减一
            //int[] num = { 1, -2, 3, -4, 5, 6, 0 };
            //for (int i = 0; i < num.Length; i++)
            //{
            //    if (num[i] > 0)
            //    {
            //        num[i] += 1;
            //    }
            //    else if (num[i] < 0)
            //    {
            //        num[i] -= 1;
            //    }
            //    else
            //    {

            //    }
            //}
            //for (int i = 0; i < num.Length; i++)
            //{
            //    Console.WriteLine(num[i]);
            //}
            //Console.ReadKey(); 
            #endregion

            #region 数组练习5

            //string[] names = { "a", "b", "c", "d" };
            //for (int i = 0; i < names.Length / 2; i++)
            //{
            //    string temp = names[i];
            //    names[i] = names[names.Length - 1 - i];
            //    names[names.Length - 1 - i] = temp;

            //}
            //for (int i = 0; i < names.Length; i++)
            //{
            //    Console.WriteLine(names[i]);
            //}
            //Console.ReadKey(); 
            #endregion


            string[] name = { "我", "是", "嫩", "蝶" };
            for(int i = 0; i < name.Length/2; i++)
            {
                string temp = name[i];
                name[i] = name[name.Length - 1-i];
                name[name.Length - 1-i] = temp;

            }
            for(int i = 0;i < name.Length; i++)
            {
                Console.WriteLine(name[i]);
            }
            Console.ReadKey();
        }
    }
}
