# PUSH_SWAP

_This is my push_swap project for 42 school_

## SUBJECT

Creation of a sort algo with two stack and only some actions anaible: **p**ush **a**, **p**ush **b**, **r**otate **a**, **r**otate **b**, **r**everse **r**otate **a**, **r**everse **r**otate **b**...
An error gestion must be set, the stack of number can't have duplicates.

### About this project
I used the Radix sort for stack of 5 number or more and basic sort for under of 5.
At that time the radix sort was for me the most easiest algo to apply in a short range of time, with low complexity and good efficiency.

## RUN
Copy this repo and position yourself inside of it, now run :
```
make
```
An executable will be create name ```push_swap```.
You can now use it with a stack of number
> [!NOTE]
> You can see in [Ressource section](#Ressource) a link to create number stack

Now just run the executable with your stack:
```
$> ./push_swap "0 1 -5 10 80 -100 33"
```
You can also pass every argument this way:
```
$> ./push_swap 0 10 -2 -10 90 100 42 -21
```
A checker as been provide by the 42 school that you can run by piping the output in it:
```
$> ./push_swap [your_stack] | [checker_linux or checker_Mac] [your_stack]
```
## RESSOURCE <a name="#Ressource"/>

* [Radix sort explanation](https://medium.com/nerd-for-tech/putting-the-rad-in-radix-sort-d7c3be4fdbdf)
* [Stack generator](https://www.calculatorsoup.com/calculators/statistics/random-number-generator.php)
