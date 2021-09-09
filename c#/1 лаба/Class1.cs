using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace _1_лаба.MainItems
{
    public class Class1 : MenuItemCore
    {
        public override string Title { get { return "Calculate expression: Y^2+3*sqrt(X)+Z"; } }

        public override void Execute()
        {
            bool number;
            double X,Y,Z, result, sqrt;
            do
            {
                Console.WriteLine("Enter X: ");
                number = Double.TryParse(Console.ReadLine(), out X);
                if (!(number))
                    Console.WriteLine("Error.....");
            } while (!number);
            do
            {
                Console.WriteLine("Enter Y: ");
                number = Double.TryParse(Console.ReadLine(), out Y);
                if (!(number))
                    Console.WriteLine("Error.....");
            } while (!number);
            do
            {
                Console.WriteLine("Enter Z: ");
                number = Double.TryParse(Console.ReadLine(), out Z);
                if (!(number))
                    Console.WriteLine("Error.....");
            } while (!number);

            sqrt = Math.Sqrt(X);

            result = Y * Y + 3 * sqrt + Z;
            Console.WriteLine("Calculation result: {0}", result);
        }
    }
}
