static CFP_ARRAY_TYPE *
_t1(CFP_ARRAY_TYPE, ctor)(uint nx, uint ny, double rate, const ZFP_SCALAR_TYPE * p, size_t csize)
{
  return reinterpret_cast<CFP_ARRAY_TYPE *>(new ZFP_ARRAY_TYPE(nx, ny, rate, p, csize));
}

static uint
_t1(CFP_ARRAY_TYPE, size_x)(const CFP_ARRAY_TYPE * self)
{
  return reinterpret_cast<const ZFP_ARRAY_TYPE *>(self)->size_x();
}

static uint
_t1(CFP_ARRAY_TYPE, size_y)(const CFP_ARRAY_TYPE * self)
{
  return reinterpret_cast<const ZFP_ARRAY_TYPE *>(self)->size_y();
}

static void
_t1(CFP_ARRAY_TYPE, resize)(CFP_ARRAY_TYPE * self, uint nx, uint ny, int clear)
{
  reinterpret_cast<ZFP_ARRAY_TYPE *>(self)->resize(nx, ny, clear);
}

static ZFP_SCALAR_TYPE
_t1(CFP_ARRAY_TYPE, get)(const CFP_ARRAY_TYPE * self, uint i, uint j)
{
  return reinterpret_cast<const ZFP_ARRAY_TYPE *>(self)->operator()(i, j);
}

static void
_t1(CFP_ARRAY_TYPE, set)(CFP_ARRAY_TYPE * self, uint i, uint j, ZFP_SCALAR_TYPE val)
{
  reinterpret_cast<ZFP_ARRAY_TYPE *>(self)->operator()(i, j) = val;
}
