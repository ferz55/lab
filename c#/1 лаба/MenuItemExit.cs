using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба.MainItems
{
    public class MenuItemExit : MenuItemCore
    {
        public override string Title { get { return "Exit"; } }

        public override void Execute()
        {
            Console.WriteLine("Exit...");
            Environment.Exit(0);
        }
    }
}
