
Notes for CDN & P2P

Contents distribution networks
	option 1: megaserrver
	replication in distributed sites

CDN access scenario
	outline a simple scenario for someone who requests a video to the
	main web server of a service and gets stream from a CDN:w

How to select the CDN cluster to stream from
	-geography
	-# hops
	-give a list

Akamai has many cache servers close to clients
	-How do we make a name resove to a proxy CDN cluster close to the client?
	-Once the cluster is figured out by a DNS resolution by an Akamai naming
	server, how to select which exact server to talk to

P2P
	-What are the basic tasks for a p2p network?
		search objects, locate objects, download objects	
	-What was Napster's biggest weakness?
		it's central point of failure
	-Name 2 things that Gnutella does well, and also 2 things it does not do
	well
		easy to find popular content, easily maintained
		unpopular content might be difficult to find, not exactly efficient
	-Summarize KaZaA in one sentence (or phrase)
		:flooding with super peers
	-What can the supernode model of Skype remind you of? (in terms of that
									it hides inside nodes from other supernode)
		:Network Address Translation

BitTorrent:
	-Describe what a BitTorrent tracker does
		: it keeps track of the users involved in file transfers, in units of
		a single file.
	-Describe the "tit-for-tat" fairness mechanism
		: every 10 seconds, the user identifies 4 highest contributer and returns
		favor to them. Every 30 seconds, this "choking" is randomized to unchoke
		some users.


