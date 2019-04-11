using System.Collections;
using System.Collections.Generic;
using NUnit.Framework;
using UnityEngine;
using UnityEngine.TestTools;

namespace Tests
{
    public class TealiumTests
    {
        Dictionary<string, string> data = new Dictionary<string, string>() {
            {"key1", "value1"},
            {"key2", "value2"}
        };

        [Test]
        public void TealiumTests_TestView()
        {
            Assert.DoesNotThrow(() =>
            {
                Tealium.TrackView("View Test");
            });
        }
     
        [Test]
        public void TealiumTests_TestEvent()
        {
            Assert.DoesNotThrow(() =>
            {
                Tealium.TrackEvent("Event Test", data);
            });
        }
  
        [Test]
        public void TealiumTests_TestViewWithData()
        {
            Assert.DoesNotThrow(() =>
            {
                Tealium.TrackView("View Test");
            });
        }

        [Test]
        public void TealiumTests_TestEventWithData()
        {
            Assert.DoesNotThrow(() =>
            {
                Tealium.TrackEvent("Event Test", data);
            });
        }

        [Test]
        public void TealiumTests_TestViewWithNulls()
        {

#if UNITY_EDITOR
            Tealium.TrackView(null);
            LogAssert.Expect(LogType.Error, "A name must be provided when calling Tealium.TrackView(...). Call will be ignored.");
#endif
        }

        [Test]
        public void TealiumTests_TestEventWithNulls()
        {

#if UNITY_EDITOR
            Tealium.TrackEvent(null);
            LogAssert.Expect(LogType.Error, "A name must be provided when calling Tealium.TrackEvent(...). Call will be ignored.");
#endif
        }
    }
}
