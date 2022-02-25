# Diffie-Hellman:
Basic Implementation of Diffie-Hellman Key Exchange Algorithm with MPIR Library for the greater than 64 bit integers.

# Definition:
Diffie–Hellman key exchange establishes a shared secret between two parties that can be used for secret communication for exchanging data over a public network.

# General Overview:

p and g, such that p is a prime number and g is a generator of p. The g is a number that, when raised to positive whole-number powers less than p, never produces the same result for any two such whole numbers.

The users, Alice and Bob, choose their secret keys a and b which are less than the prime p. Next, Alice and Bob compute public keys A and B based on their personal keys according to the following statements:

--> A = g^a mod p

--> B = g^b mod p

After that, both sides send their own A and B to each other and compute the common key as in following statements;


--> Common Key = B^a mod p

--> Common Key = A^b mod p

Finally, they can communicate with each other without reveal their secret keys.



