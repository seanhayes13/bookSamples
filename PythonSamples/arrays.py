if __name__=="__main__":
    print("Arrays")
    '''
    The more popular simple containers in Python are arrays/tuples
    and lists.
    
    Tuples, or arrays as known in other languages, are fixed both in their length
    and their content, once the tuple is defined, that is it, there is no changing.
    In the example below, we make a tuple that contains several animals.
    '''
    animals = ("dog","cat","horse","elephant")
    '''
    Now if we wanted to add another animal to the tuple we would have to make an 
    entirely new tuple, and add both the original and the new values. To access
    the contents of the tuple, we use the elements index, starting with the first
    at 0
    '''
    print(animals[0]) # This will print dog
    print(animals[3]) # This will print the last element in the list, elephant
    '''
    Make sure to remember difference between what place an element is in a list
    versus its index. elephant is the 4th element but has an index of 3. If you
    were to try and call animals[4] you will get an error since there is no index
    of 4.
    
    A level of freedom, and an easy way to get into trouble, with Python comes in
    the ability to make tuples of different data types. In the example below, we will
    make a tuple with strings, integers, and doubles. Also, notice that you can create
    a tuple without using the parentheses
    '''
    random_info = "school",23, 3.14
    print(random_info[2])
    '''
    Why use tuples? Tuples are great for storing fixed data. If you are writing a
    grade book program, you can use two tuples to the high and low values for different
    grades, like below:
    high = (100, 89, 79, 69, 59)
    low = (90, 80, 70, 60, 0)
    With this example, for a grade to be an A, it would have to be between high[0]
    and low[0] 
    
    The other popular container is the list. Lists are powerful in that, in addition
    to being able to hold any data type like tuples, their size and content can change.
    To create an empty list, you define the variable name, and use a set of empty square
    brackets. In the example below, we create an empty list named colors
    '''
    colors = []
    '''
    Now we can ask a large group of people for their favorite color and store it in the list
    and we do not have to worry too much about how many people we ask.
    '''
    colors.append("green")
    colors.append("blue")
    colors.append("orange")
    '''
    To access an element in the list, we again just refer to its index
    '''
    print(colors[0])