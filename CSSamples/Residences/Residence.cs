using System;

namespace csBookSamples.Residences
{
    class Residence
    {
        private int numRooms;

        public int NumRooms { get => numRooms; set => numRooms = value; }

        public virtual void message()
        {
            Console.WriteLine("Message from Residence class");
        }

        protected void protectedMethod()
        {
            Console.WriteLine("Protected method in Residence class");
        }
    }
}
