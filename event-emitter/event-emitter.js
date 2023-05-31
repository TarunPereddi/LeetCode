class EventEmitter {
  constructor() {
    this.fns = {};
  }

  subscribe(e, cb) {
    this.fns[e] ? this.fns[e].push(cb) : (this.fns[e] = [cb]);

    return {
      unsubscribe: () => {
        this.fns[e].pop();
      },
    };
  }

  emit(e, args = []) {
    return this.fns[e]?.map((fn) => fn(...args)) || [];
  }
}

/**
 * const emitter = new EventEmitter();
 *
 * // Subscribe to the onClick event with onClickCallback
 * function onClickCallback() { return 99 }
 * const sub = emitter.subscribe('onClick', onClickCallback);
 *
 * emitter.emit('onClick'); // [99]
 * sub.unsubscribe(); // undefined
 * emitter.emit('onClick'); // []
 */