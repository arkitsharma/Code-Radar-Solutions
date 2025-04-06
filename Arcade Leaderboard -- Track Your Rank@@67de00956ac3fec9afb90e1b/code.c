// Your code here...def find_ranks(leaderboard_scores, player_scores):
    # Create a unique, sorted list of leaderboard scores
    unique_leaderboard_scores = sorted(set(leaderboard_scores), reverse=True)

    # List to store the player's ranks
    player_ranks = []

    # Iterate over the player scores
    for score in player_scores:
        # Start from the top of the leaderboard
        rank = 1

        # Find the player's rank
        for l_score in unique_leaderboard_scores:
            if score >= l_score:
                break
            rank += 1

        # Append the rank for this score
        player_ranks.append(rank)

    return player_ranks

# Input
n = int(input())
leaderboard_scores = list(map(int, input().split()))
m = int(input())
player_scores = list(map(int, input().split()))

# Calculating ranks
ranks = find_ranks(leaderboard_scores, player_scores)

# Output
for rank in ranks:
    print(rank)
