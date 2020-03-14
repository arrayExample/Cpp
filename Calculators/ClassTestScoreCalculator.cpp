/*
Kevin Lippincott
Class Test Score Calc

~ Instructions ~
You are given a list of students names and their test scores. Design a pseudocode that does the following:

Calculates the average test scores.
Determines and prints the names of all the students whose test scores are below the average test score.
Determines the highest test score.
Prints the names of all the students whose test scores are the same as the highest test score.

You are to divide this problem into sub problems as follows:

The first sub problem determines the average test score.
The second sub problem determines and prints the names of all the students whose test scores are below the average test score.
The third sub problem determines the highest test score.
The fourth sub problem prints the names of all the students whose test scores are the same as the highest test score. 
The main pseudocode combines the solutions of the sub problems.

~~ Pseudocode ~~
	~Average Test Score~
		int numberOfScores(0), total(0), testScore, average, maxValue, alsoMax = 0;
		string studentName;
		ifstream("fileName.txt");
		inFile >> studentName >> testScore

		while (!fileName.fail())
		{total = total + testScore;
		numberOfScores++;}
			//~ ALTernate GetLine for average ~?~
			//while(getline(fileName, line)
				//numberOfLines++;
		average = total/numberOfScores;

	~Students Below Average Test Score~
		if(testScore < average)
			cout << studentName;

	~Highest Test Score~
		while (!fileName.fail())
			{if (maxValue >= testScore)
				{maxValue = testScore;}}
	
	~Same Score as Highest (/previous) Test~
		{if (alsoMax == maxValue)
			{cout << studentName;}}
*/