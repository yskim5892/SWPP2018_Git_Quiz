# SWPP2018 Git Quiz

There are two branches, `master` branch and `add` branch, on this repository.
The `master` branch contains a skeleton code for a calculator (the same one as the assignment),
and the `add` branch contains the skeleton code and the implementation of add function.
You will make two pull requests, one for the `master` branch and one for the `add` branch.

***

### STEP 1
1. Fork this repository and clone the fork into your local machine.
2. Make a new branch `calc1` from the `master` branch and checkout to it.
3. Implement add, sub, and mul function, while making one commit for each function.
This means, you should make three commits in total.
4. Push your branch into origin repository and make a pull request to the `master` branch of the upstream repository(this repository) from your `calc1` branch.

### STEP2
5. Checkout to a new branch `calc2` from the `calc1` branch.
6. Squash the three commits you have made and push it into the `calc2` branch of your fork.
7. Since add function is already implemented in the `add` branch,
there will be a conflict between the `add` branch and `calc2` branch.
8. Resolve the conflict and make a pull request to the `add` branch of the upstream repository from your `calc2` branch.

### NOTE
- Note that the two pull requests should not contain any conflicts after you finish all the steps.

***
