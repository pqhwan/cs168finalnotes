
Notes for DHT 


Distributed hash table
	ex- The chord ring

Node's identifier is the hash of the IP

Key's identifier is the hash of it

Each node maintains a pointer to its successor
	-What kind of maintenanace is required to keep this property?

Consistent hashing
	-Resizing (change in availability) only requires moving k/n objects registry
	-Why does the chord ring use consistent hashing?

Simple lookup
	-Walk us through a simple lookup procedure in a chord ring
	-O(n)

Finger table
	-Shortcuts to certain advanced locations in the ring
	-map those with id of: yourid + 2^n
	-lookup becomes O(log n)

Stabilization procedure
	-What is this for and how does it work?
		hints: 2 parts - stabilize(), notify()


Joining operation
	-how is this done?
		hint: the predecessor tells the new guy who his successor used to be
		hint: new guy --stabilize()--> successor
		hint: predecessor --stabliize()--> new guy
		then we're done!


