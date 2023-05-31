class EventEmitter {
  events = {};
  subscribe(event, cb) {
    if (!(event in this.events)) {
      this.events[event] = [];
    }
    this.events[event].push(cb);
    const idx = this.events[event].length-1
    return {
      unsubscribe: () => {
        this.events[event].splice(idx,1);
      },
    };
  }

  emit(event, args = []) {
    if (!(event in this.events)) return [];
    return this.events[event].map((fn) => fn(...args));
  }
}