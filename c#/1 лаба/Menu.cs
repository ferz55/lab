﻿using _1_лаба.MainItems;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба
{
    public class Menu
    {
       private static List<MenuItemCore> MenuItems = new List<MenuItemCore>();

        public static void ClearItems()
        {
            Menu.MenuItems.Clear();
        }
        public static  void AddItem(MenuItemCore menuItem)
        {
            Menu.MenuItems.Add(menuItem);
        }

        public static void Execute()
        {
            ShowMenu();
            int iMenu = IOUtils.SafeReadInteger(null);
            if (iMenu >= 0 && iMenu < Menu.MenuItems.Count)
            {
                Menu.MenuItems.ToArray()[iMenu].Execute();
            }
            else
            {
                Console.WriteLine("Menu item not found...");
            }
        }
        private static void ShowMenu()
        {
            Console.WriteLine("=== MENU ===");

            int iMenuItem = 0;
            foreach (MenuItemCore menuItem in Menu.MenuItems)
            {
                Console.WriteLine("{0}: {1} ", iMenuItem++, menuItem.Title);
            }
        }
    }
}
