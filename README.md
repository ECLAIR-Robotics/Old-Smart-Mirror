# UT ECLAIR Smart Mirror Project
This is the GitHub repository for ECLAIR's smart mirror project. Ultimately, this software will run on a Raspberry Pi and provide a useful interface so users can see the time, any todo items, the weather, etc. through a mirror.

These instructions are not very thorough, so if you have any trouble and the linked details aren't sufficient, ask for clarification on the Discord server.

## Getting Started
1. Make sure you're on the ClickUp to look at what tasks are being worked on. Contact Sahil if you need access to the ClickUp.
2. Use GitHub to add your features/widgets and start a pull request so Sahil can review it. More details in the following section.
3. Test your code using SSH. Credentials are on the Discord server. Detailed instructions are in the **Setting up Remote Development** section below.

## Contributing to the Repository
We're using GitHub, so we'll follow its [collaborative development model](https://docs.github.com/en/github/collaborating-with-pull-requests/getting-started/about-collaborative-development-models). Here are a brief list of steps you'll take to create your first pull request. Each step has a link to more detailed instructions on GitHub's docs.
1. First, you need to [fork this repository](https://docs.github.com/en/github/collaborating-with-pull-requests/working-with-forks/about-forks) so you can make your own changes. At the top right of this page, there's a fork button. Press that, and you'll end up with a copy of this repo.
2. Now that you have a fork, you're almost ready to start making changes. [Create a new branch](https://docs.github.com/en/github/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-and-deleting-branches-within-your-repository) in your repository, and name it whatever you'd like, such as the name of the feature you're about to start work on.
4. Now you need to [clone your repository](https://docs.github.com/en/repositories/creating-and-managing-repositories/cloning-a-repository) to your computer and actually begin making changes. 
5. After you've cloned and entered the repository, run two commands to set your commit usernames and email correctly.
    1. `git config user.name "First Last"`
    2. `git config user.email "your.email@something.com"`
    3. **DO NOT USE THE --GLOBAL FLAG**
7. Switch to the branch you just created using `git checkout <branch-name>`. You can use VSCode or some other IDE to make changes. You might not have all the dependencies installed so there could be a lot of errors. You will be able to test your code on the Raspberry Pi using the sections below.
8. After you're done making changes or at any frequency you'd like to "checkpoint" your code, run `git commit -am "<describe your changes>"` and `git push origin <branch-name>` to send the code to your forked repository.
9. Once you're done with a feature or task and you'd like it to be reviewed, head back to GitHub and start a [Pull Request](https://docs.github.com/en/github/collaborating-with-pull-requests/proposing-changes-to-your-work-with-pull-requests/creating-a-pull-request-from-a-fork). You can see exactly what changes you made and describe them. Once you're done, you can finish by pressing "Create Pull Request". Here are some suggestions/requirements for your pull request.
     1. Add Sahil as a reviewer
     2. Image(s) of your feature running
     3. A proper title
     4. Any bugs or problems you faced
     5. Things you're doing in your code that might be problematic
     6. Limitations of the module
10. Once Sahil has reviewed your pull request and has any suggestions, you can make them in your branch, commit, and push. Resolve any requested changes you've completed and re-request a review. The button to do this is on the right side-bar under your pull request with a recycling icon.

## Setting up Remote Development
Since setting up all the dependencies for a project is extremely challenging since they are platform development, you can test your code on the Raspberry Pi remotely.
1. Get the Raspberry Pi IP address and password from the Discord server `#smart-mirror` channel. The IP might change, so be aware of that.
2. In VSCode, make sure you've installed the "Remote Development - SSH" extension so you can remotely access the files on the Pi and run your code.
3. [Follow the instructions](https://code.visualstudio.com/docs/remote/ssh#_connect-to-a-remote-host) for connecting to a remote host. **Note: the username is `pi`.**
4. Go ahead and clone the repository to the Raspberry Pi using the [VSCode integrated terminal](https://code.visualstudio.com/docs/editor/integrated-terminal) using the same commands you used in the **Contributing to the Repository** section. You might need to switch to your branch using `git checkout <branch-name>`.

## Testing your Code
Running your code is fairly straightforward. Make sure you're in a directory with a name like `../Smart-Mirror/` and you have files like `CMakeLists.txt` in it. You can check using `ls`.
1. Run `cmake -S . -B build/` to configure dependencies and generate the `Makefile` you need to build the project.
2. Run `cd build` to change directories into the build folder.
3. Run `make` to build the executable.
4. Run the command `DISPLAY=":0.0" ./jarvis.csj` and look at the Discord stream to see the results. Make sure you run `make` again after making changes.
