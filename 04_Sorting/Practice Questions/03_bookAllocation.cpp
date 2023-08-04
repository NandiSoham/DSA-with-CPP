#include <iostream>
#include <numeric>
using namespace std;

// Function to check if a given solution is possible or not
bool isPossibleSol(int arr[], int N, int M, int sol)
{
    int pageSum = 0; // To keep track of the sum of pages of the current student
    int c = 1;       // To keep track of the number of students

    // Loop through each book to check if it can be allocated to a student
    for (int i = 0; i < N; i++)
    {
        if (arr[i] > sol)
        {
            // agar current book ki page number sol se greater hai to wo book allocate nehi ho sakta , return false.
            // If the current book's page number is greater than the current solution (mid),
            // then it cannot be allocated to any student, so the solution is not valid.
            return false;
        }
        else if (pageSum + arr[i] > sol)
        {
            // If allocating the current book to the current student exceeds the current solution (mid),
            // then we move to the next student and reset the pageSum for that student.
            c++;              // Move to the next student
            pageSum = arr[i]; // Assign the current book's pages to the new student
            if (c > M)
            {
                // agar no of allocation no of student se zada ho gya to wo invalid hai, return false.
                // If the number of allocations (students) becomes greater than M (maximum allowed students),
                // the solution is not valid, as we cannot allocate all books to M students.
                return false;
            }
        }
        else
        {
            // If the current book can be allocated to the current student without exceeding the solution (mid),
            // then add its pages to the pageSum for the current student.
            pageSum += arr[i];
        }
    }
    // If we reach this point, it means all books can be allocated to M students using the given solution (mid).
    return true;
}

// Function to find the minimum number of pages each student must read
int findPages(int arr[], int N, int M)
{
    if (M > N)
    {
        // If the number of students (M) is greater than the number of books (N),
        // it's not possible to allocate all books to each student, so return -1.
        return -1;
    }
    int start = 0;                         // Start of the binary search range (minimum number of pages possible)
    int end = accumulate(arr, arr + N, 0); // End of the binary search range (sum of all book pages, maximum number of pages possible)
    int ans = -1;                          // Variable to store the result (minimum number of pages each student must read)

    // Binary search to find the minimum number of pages each student must read
    while (start <= end)
    {
        int mid = start + (end - start) / 2; // Calculate the middle value

        if (isPossibleSol(arr, N, M, mid))
        {
            // If the current solution (mid) is possible, update the answer and search for a smaller solution
            ans = mid;     // Update the answer to the current solution (mid)
            end = mid - 1; // Look for a smaller solution in the left half
        }
        else
        {
            // If the current solution (mid) is not possible, look for a larger solution in the right half
            start = mid + 1;
        }
    }
    // Return the minimum number of pages each student must read
    return ans;
}

int main()
{
    // Number of pages in books
    int arr[] = {12, 34, 67, 90};
    int N = sizeof arr / sizeof arr[0];
    int M = 2; // No. of students

    cout << "Minimum number of pages = " << findPages(arr, N, M) << endl;
    return 0;
}
