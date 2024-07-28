# JSON Parser for US States Database

A JSON parser in C++ for a JSON database containing information about the states in the USA.

## Description

In the text file `us_states.xml` you will find the complete list of all the states in the United States of America. For each state, you have the following information:
- Name of the state
- Abbreviation
- Capital
- Date of admission to the union
- Most populous city
- Population
- Area in square miles
- One or two time zones, depending on how big the state is
- Whether or not the state follows daylight saving time

## Implementation

Implement a library to access and interrogate the file. You must:
1. Read the file and store all the data in a table (therefore, create a class to store the data with attributes and methods).
2. Implement functions to query the database from the objects you have in memory. 

### Example Queries

#### Query 1
Given the name of the state, return all its data in a string formatted EXACTLY like in the following example:

**Input:**
"Alaska"


**Output:**
- State: Alaska
- Abbreviation: AL
- Capital: Juneau
- Date of admission: January 01, 1959
- Most populous city: Anchorage
- Population: 698473
- Area: 656525 mi²
- Time zones: AKST (UTC-09), HST (UTC-10)
- DST: Yes


#### Query 2
Return a string with the list of all the capital cities in alphabetical order, followed by the abbreviation of the state between parenthesis, formatted EXACTLY like in the following example:

- Albany (NY)
- Annapolis (MD)
...


#### Query 3
Return a string with the list of the five largest states (separated by a new line), formatted EXACTLY like in the following example:

- Alaska
- Texas
- California
...


#### Query 4
Return a string with the list of states ordered based on their date of admission to the union (from the oldest to the newest) followed by the date of admission. The string should be formatted EXACTLY like:

- Delaware -> December 07, 1787
- Pennsylvania -> December 12, 1787
- New Jersey -> December 18, 1787
...


#### Query 5
Return the overall area of the United States of America, in square miles.

#### Query 6
Return the overall population of the United States of America.
