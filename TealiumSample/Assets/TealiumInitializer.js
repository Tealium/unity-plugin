#pragma strict

function Start() {
	var data = new Dictionary.<String, String>(2);
	data["custom_alpha"] = "alpha";
	data["custom_beta"] = "beta";
	
	Tealium.TrackView("First Level", data);
}
