using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _9._13方法函数
{
    internal class Program
    {
        static void Main(string[] args)
        {
            Program.PlayGame();
            Program.WuDi();
            Program.PlayGame();
            Program.PlayGame();
            Program.PlayGame();
            Program.PlayGame();
            Program.WuDi();
            Program.PlayGame();
            Console.ReadKey();

        }
        /// <summary>
        /// 正常玩游戏
        /// </summary>
        public static void PlayGame()
        {
            Console.WriteLine("超级玛丽走呀走，跳呀跳，顶呀顶");
            Console.WriteLine("超级玛丽走呀走，跳呀跳，顶呀顶");
            Console.WriteLine("超级玛丽走呀走，跳呀跳，顶呀顶");
        }
        /// <summary>
        /// 无敌
        /// </summary>
        public static void WuDi()
        {
            Console.WriteLine("突然，顶到一个无敌");
            Console.WriteLine("屏幕闪烁");
        }
    }
}
