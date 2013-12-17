
Notes for DNS

A name could map to multiple addresses

Multiple names for the same address (aliases)

Two types of queries: Recursive and iterative

TLD servers

Authoritative DNS servers
	-Who manages this?

Reverse Mapping: reverse address and append it by in-addr.arpa

DNS caching
	-Why is it important and effective?

Negative caching

Resource records: name ttl class type rdata

Root cache file

Glu records
	-Where do these go?

Take first answer


Inserting a record in DNS
	-You have a new startup: you set up your domain. What to do now?
		1-authoritative server
		2-reverse PTR bindnigs
	-Why can't you "run the name server for that domain"?

Cache Poisoning
	-What kind of records used for poisoning?
	-You set up your name server to give out misleading glue records.
	Explain one way to get a victim to get information from your name server.
	-How can a bad guy "guess" the ID field of the query that the local server will use?










