
Notes for Wireless

Involved entities in a wireless network
	-wireless hosts: hosts
	-base stations (BS): cell tower, 802.11 access points
	-wireless link: the medium (air) --the thing that requires MAC protocol

Two modes
	-infrastructure mode: connected to base station
	-ad hoc mode: chaining node coverage

Wireless link characteristics
	?what determines the tradeoff between SNR and BER?
	: signal strength (power)

	?what does hidden terminal problem make difficult?
	: Media Access Control

CDMA Code Division Multiple Access
	?what property of CDMA's codes make simultaneous multiple access possible?
	: the orthogonality of the codes

Wireless LAN
	?which MAC protocol does all of the IEEE 802.11 standards use?
	:CSMA/CA, no CD (meaning that once CA passes, entire frame will be sent)
	-requesttosend, cleartosend for big transfers
	?explain what the first three address slots in 802.11 frames are for
	:addr1: toreceive addr2: sender addr3: router

Mobility
	?explain advantage/dis of indirect mobility routing over direct routing
	-indirect routing can be "chained" for smooth transitions between
	networks while maintaining connection
	-however, triangule routing can be inefficient (especially when
	correspondent and the device are in the same network)
	?same of direct over indirect?
	-the connection method is not transparent to the correspondent
	-but triangle routing is cleared
	
Anchor foreign agent: chaining direct routing 

Mobile IP (RFC 3344)
	-in Mobile IP, 	how do mobiles detect nearby agents?
	:the agents (home or foreign) broadcasts ICMP messages (agent discovery)
	-Make a simple timeline of a registration process for a mobile agent
	that visited a foreign agent (starting from ICMP agent discovery)
	

	

	
	
