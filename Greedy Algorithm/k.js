async function fetchLoop() {
    while (true) {
      try {
        const res = await fetch("https://google.com/");
        console.log(await res.text()); // or res.status
      } catch (err) {
        console.error("Error:", err);
      }
  
      // prevent overwhelming the server: add a delay
      await new Promise(r => setTimeout(r, 10)); // 1s delay
    }
  }
  
  fetchLoop();
  