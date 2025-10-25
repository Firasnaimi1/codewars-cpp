/*
Instruction : 
In this Kata, you will be given an array of numbers in which two numbers occur once and the rest occur only twice. Your task will be to return the sum of the numbers that occur only once.
*/

// MY SOLUTION : 
int repeats(std::vector<int>v){
    // Create a vector to store numbers that appear exactly once
    std::vector<int> singles;

    // Variable to keep the sum of numbers that appear only once
    int sum = 0;
  
    // Loop over each element in the input vector
    for (int i = 0; i < v.size(); i++) {
        // Counter to keep track of how many times v[i] appears
        int count = 0;

        // Loop over the whole vector to count occurrences of v[i]
        // If the element at j is equal to v[i]
        // Increment the count
        for (int j = 0; j < v.size(); j++) {
            if (v[i] == v[j]) {   
                count++;           
            }
        }

        // If the number appears exactly once, add it to singles
        if (count == 1) {
            singles.push_back(v[i]);
        }
    }

    // Sum all numbers that appeared exactly once
    for (int x : singles) {
        sum += x;
    }

    // Return the final sum
    return sum;
}
