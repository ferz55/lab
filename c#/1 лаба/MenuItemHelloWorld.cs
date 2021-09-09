using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба.MainItems
{
    public class MenuItemHelloWorld : MenuItemCore
    {
        public override string Title { get { return "Hello World!"; } }

        public override void Execute()
        {
            Console.WriteLine("Hello World!");
        }
    }
}
