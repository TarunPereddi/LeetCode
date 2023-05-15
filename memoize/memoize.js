/**
 * @param {Function} fn
 */
const memoize = fn => {
    const memo = new Map()

    return (...args) => {
        const key = keyOf(args)
        if (!memo.has(key)) {
            memo.set(key, fn(...args))
        }
        return memo.get(key)
    }
}

const keyOf = args => JSON.stringify(args)