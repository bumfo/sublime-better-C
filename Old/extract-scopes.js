const fs = require('fs')

fs.readFile('C Better.sublime-syntax', 'utf8', (err, data) => {
  if (err) {
    console.error(err)
    return
  }
  process(data)
})

const topScope = 'punctuation'
// const topScope = 'keyword'
// const topScope = 'storage'
// const topScope = 'entity'

function process(data) {
  let set = new Set()

  data.replace(new RegExp('\\b' + topScope + '\\b(?:\\.[a-zA-Z][a-zA-Z0-9\\-]*)*', 'g'), (it) => {
    set.add(it)
  })

  Array.from(set)
    .sort((u, v) => {
      u = u.split('.')
      v = v.split('.')

      while (u.length && v.length) {
        if (u.length != v.length && (u.length == 1 || v.length == 1))
          return u.length - v.length

        let a = u.shift().localeCompare(v.shift())
        if (a) return a
      }
      return 0
    })
    .forEach((it) => {
      console.log(it)
    })
}
