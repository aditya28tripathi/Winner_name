

   vector<string> winner(string arr[],int n)
    {
           map<string, int> voteCount;

    // Count the votes for each candidate
    for (int i = 0; i < n; ++i) {
        voteCount[arr[i]]++;
    }

    // Find the candidate with the maximum votes
    string winnerName = "";
    int maxVotes = 0;

    for (const auto& entry : voteCount) {
        // If the current candidate has more votes or has equal votes but lexicographically smaller
        if (entry.second > maxVotes || (entry.second == maxVotes && entry.first < winnerName)) {
            winnerName = entry.first;
            maxVotes = entry.second;
        }
    }

    // Convert the vote count to string
    string maxVote = to_string(maxVotes);

    // Return the result as a vector
    return {winnerName, maxVote};

    }
