if __name__=="__main__":
    # We have already worked with output earlier during the Hello World
    print("Hello")
    # Now to work with getting input from the user. To get input in python
    # we simply use the command input. Inside the parentheses we can place
    # message that we want to display to prompt the user for information.
    # The input method will get the information from the user and place into
    # a variable. For this first example, we will ask the user for their name.
    first_name = input("What is your first name?\n")
    # And to show that we did get the information and that it was stored in
    # the variable, we can print it back out.
    print("Your name is",first_name)
    '''
    When adding multiple strings in a print statement like we did above, using
    a comma will automatically place a space between each string, in this case
    between the end of is and the beginning of the text stored in the variable.
    Another way to build a display message within the print method is to use
    the plus sign, however, there are things to take into consideration. 
    --First, no extra spaces will be provided so you will need to add them yourself. 
    --Second, if you are trying to print any numbers, the compiler will see this and
    try to add them together. So if you are trying to print 4 and 5 separately, the
    compiler will add them and print 9. If you try to print a string and a number,
    the compiler will give you an error that you cannot add a number to a string.
    '''
    print("Again, your name is "+first_name)
    '''
    A work around for the second case is to cast (more on this in a later section)
    the number to a string. Do this by simply adding str before the number or the
    variable holding the number, and place the variable or number inside a set of
    parantheses
    '''
    answer = 42
    print("The answer to life is "+str(answer))