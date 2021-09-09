using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба.MainItems
{
    public abstract class MenuItemCore
    {
        public abstract string Title { get; }
        public abstract void Execute();
    }
}
