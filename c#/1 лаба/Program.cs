using _1_лаба.MainItems;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба
{
    class Program
    {
        static void Main(string[] args)
        {
            Menu.ClearItems();
            Menu.AddItem(new MenuItemExit());
            Menu.AddItem(new MenuItemHelloWorld());
            Menu.AddItem(new Class1());
            while (true)
            {
                Menu.Execute();
            }
        }
    }
}
