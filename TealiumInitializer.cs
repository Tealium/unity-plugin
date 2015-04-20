using UnityEngine;
using System.Collections;
using System.Collections.Generic;

public class TealiumInitializer : MonoBehaviour {
		
	void Start() {
		Tealium.TrackView("First Level", new Dictionary<string, string>() {
			{"custom_alpha", "alpha"}
			, {"custom_beta", "beta"}
		});
	}
}
