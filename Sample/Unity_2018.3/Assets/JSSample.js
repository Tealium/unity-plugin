#pragma strict

import System.Collections.Generic;

function OnMouseDown() {

	var data = new Dictionary.<String, String>(1);
	data['lang'] = 'JavaScript';

	Tealium.TrackEvent("JSSample:click", data);
}