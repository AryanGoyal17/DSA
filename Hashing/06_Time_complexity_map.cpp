//-------------------------------------------------------------------------------------//

// Time complexity of pre-storing and fetching--

/// Map -- O(logn) [best, avg and worst case]
/// Unordered Map -- O(1) [best and avg case, O(N) -- worst case[collision happens]]

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-number-hashing-- [map used]

/// Time complexity = O(NlogN) + O(qlogN)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-character-hashing-- [map used]

/// Time complexity = O(NlogN) + O(qlogN)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-number-hashing-- [unordered map used] -- best, avg case

/// Time complexity = O(N) + O(q)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-character-hashing-- [unordered map used] -- best, avg case

/// Time complexity = O(N) + O(q)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-number-hashing-- [unordered map used] -- worst case

/// Time complexity = O(N^2) + O(q*N)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//

// Time and space complexity of map-character-hashing-- [unordered map used] -- worst case(collision occurs)

/// Time complexity = O(N^2) + O(q*N)
/// Space complexity = input space = O(N), auxiliary space = O(no of keys in map)

//-------------------------------------------------------------------------------------//


//NOTE--- why is complexity for pre-storing, fetching in map = O(logn) -- in written notes
//NOTE--- why is complexity for pre-storing, fetching in unordered_map = O(1)[best, avg] -- in written notes
//NOTE--- why is complexity for pre-storing, fetching in unordered_map = O(N)[worst_case] -- in written notes
//NOTE--- What is collision and division method -- in written notes