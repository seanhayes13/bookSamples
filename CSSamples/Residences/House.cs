using System;

namespace csBookSamples.Residences
{
    class House : Residence
    {
        public void sampleMethod()
        {
            Console.WriteLine("Public method in House class");
            this.protectedMethod();
        }

        public override void message()
        {
            Console.WriteLine("Message from House class");
        }
    }
}
