#ifndef POLYSCHEME_ZRINGUTILS_H_
#define POLYSCHEME_ZRINGUTILS_H_

#include <NTL/ZZ.h>
#include <NTL/ZZX.h>
#include "CZZ.h"
#include "CZZX.h"

using namespace NTL;

class Ring2Utils {
	public:

		//-----------------------------------------


		/**
		 * addition in ring Z_q[X] / (X^N + 1)
		 * @param[out] p1 + p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void add(ZZX& res, ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		/**
		 * addition in ring Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 * @return p1 + p2 in Z_q[X] / (X^N + 1)
		 */
		static ZZX add(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);
//		static void add(CZZX& res, CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);

		/**
		 * addition in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p1 -> p1 + p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void addAndEqual(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

//		static void addAndEqual(CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * substraction in ring Z_q[X] / (X^N + 1)
		 * @param[out] p1 - p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void sub(ZZX& res, ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		/**
		 * substraction in ring Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 * @result p1 - p2 in Z_q[X] / (X^N + 1)
		 */
		static ZZX sub(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

//		static void sub(CZZX& res, CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);


		/**
		 * substraction in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p1 -> p1 - p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void subAndEqual(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		static void conjugate(ZZX& res, ZZX& p, const long& degree);

		static void conjugateAndEqual(ZZX& p, const long& degree);

//		static void subAndEqual(CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * multiplication in ring Z_q[X] / (X^N + 1)
		 * @param[out] p1 * p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void mult(ZZX& res, ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		/**
		 * multiplication in ring Z_q[X] / (X^N + 1)
		 * @param[in] p1 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 * @result p1 * p2 in Z_q[X] / (X^N + 1)
		 */
		static ZZX mult(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

//		static void mult(CZZX& res, CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);
//		static void mult(CZZX& res, CZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		/**
		 * multiplication in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p1 -> p1 * p2 in Z_q[X] / (X^N + 1)
		 * @param[in] p2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void multAndEqual(ZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

//		static void multAndEqual(CZZX& p1, CZZX& p2, ZZ& mod, const long& degree);
//		static void multAndEqual(CZZX& p1, ZZX& p2, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * square in ring Z_q[X] / (X^N + 1)
		 * @param[out] p^2 in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void square(ZZX& res, ZZX& p, ZZ& mod, const long& degree);

		/**
		 * square in ring Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 * @result p^2 in Z_q[X] / (X^N + 1)
		 */
		static ZZX square(ZZX& p, ZZ& mod, const long& degree);

//		static void square(CZZX& res, CZZX& p, ZZ& mod, const long& degree);

		/**
		 * square in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p -> p^2 in Z_q[X] / (X^N + 1)
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void squareAndEqual(ZZX& p, ZZ& mod, const long& degree);
//		static void squareAndEqual(CZZX& p, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * multiplication by monomial in ring Z_q[X] / (X^N + 1)
		 * @param[out] p * X^d in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] monomial degree d
		 * @param[in] degree N
		 */
		static void multByMonomial(ZZX& res, ZZX& p, const long& monomialDeg, const long& degree);

		/**
		 * multiplication by monomial in ring Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] monomial degree d
		 * @param[in] degree N
		 * @result p * X^d in Z_q[X] / (X^N + 1)
		 */
		static ZZX multByMonomial(ZZX& p, const long& monomialDeg, const long& degree);

//		static void multByMonomial(CZZX& res, CZZX& p, const long& monomialDeg, const long& degree);

		/**
		 * multiplication by monomial in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p -> p * X^d in Z_q[X] / (X^N + 1)
		 * @param[in] monomial degree d
		 * @param[in] degree N
		 */
		static void multByMonomialAndEqual(ZZX& p, const long& monomialDeg, const long& degree);

//		static void multByMonomialAndEqual(CZZX& p, const long& monomialDeg, const long& degree);

		//-----------------------------------------

		/**
		 * multiplication by constant in ring Z_q[X] / (X^N + 1)
		 * @param[out] p * c in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] constant c
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void multByConst(ZZX& res, ZZX& p, const ZZ& cnst, ZZ& mod, const long& degree);

		/**
		 * multiplication by constant in ring Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] constant c
		 * @param[in] mod q
		 * @param[in] degree N
		 * @result p * c in Z_q[X] / (X^N + 1)
		 */
		static ZZX multByConst(ZZX& p, const ZZ& cnst, ZZ& mod, const long& degree);

//		static void multByConst(CZZX& res, CZZX& p, const ZZ& cnst, ZZ& mod, const long& degree);
//		static void multByConst(CZZX& res, CZZX& p, const CZZ& cnst, ZZ& mod, const long& degree);

		/**
		 * multiplication by constant in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p -> p * c in Z_q[X] / (X^N + 1)
		 * @param[in] constant c
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void multByConstAndEqual(ZZX& p, const ZZ& cnst, ZZ& mod, const long& degree);

//		static void multByConstAndEqual(CZZX& p, const ZZ& cnst, ZZ& mod, const long& degree);
//		static void multByConstAndEqual(CZZX& p, const CZZ& cnst, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * multiplication by 2^b in ring Z_q[X] / (X^N + 1)
		 * @param[out] p * 2^b in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] degree b
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 */
		static void leftShift(ZZX& res, ZZX& p, const long& bits, const long& logMod, const long& degree);

		/**
		 * multiplication by 2^b in ring Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] degree b
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 * @result p * 2^b in Z_q[X] / (X^N + 1)
		 */
		static ZZX leftShift(ZZX& p, const long& bits, const long& logMod, const long& degree);

//		static void leftShift(CZZX& res, CZZX& p, const long& bits, const long& logMod, const long& degree);

		/**
		 * multiplication by 2^b in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p -> p * 2^b in Z_q[X] / (X^N + 1)
		 * @param[in] degree b
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 */
		static void leftShiftAndEqual(ZZX& p, const long& bits, const long& logMod, const long& degree);

		/**
		 * multiplication by 2 in ring Z_q[X] / (X^N + 1)
		 * @param[in, out] p -> 2p in Z_q[X] / (X^N + 1)
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 */
		static void doubleAndEqual(ZZX& p, const long& logMod, const long& degree);
//		static void leftShiftAndEqual(CZZX& p, const long& bits, const long& logMod, const long& degree);

		//-----------------------------------------

		/**
		 * division by 2^b in ring Z_q[X] / (X^N + 1)
		 * @param[out] p / 2^b in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z_q[X] / (X^N + 1)
		 * @param[in] degree b
		 * @param[in] degree N
		 */
		static void rightShift(ZZX& res, ZZX& p, const long& bits, const long& degree);
//		static void rightShift(CZZX& res, CZZX& p, const long& bits, const long& logMod, const long& degree);

		/**
		 * division by 2^b in ring Z_q[X] / (X^N + 1)
		 * @param[in,out] p -> p / 2^b in Z_q[X] / (X^N + 1)
		 * @param[in] degree b
		 * @param[in] degree N
		 */
		static void rightShiftAndEqual(ZZX& p, const long& bits, const long& degree);
//		static void rightShiftAndEqual(CZZX& p, const long& bits, const long& logMod, const long& degree);

		//-----------------------------------------

		/**
		 * changing p(X) to p(X^pow) in Z_q[X] / (X^N + 1)
		 * @param[out] p(X^pow) in Z_q[X] / (X^N + 1)
		 * @param[in] p(X) in Z_q[X] / (X^N + 1)
		 * @param[in] power pow
		 * @param[in] mod q
		 * @param[in] degree N
		 */
		static void inpower(ZZX& res, ZZX& p, const long& pow, ZZ& mod, const long& degree);

		/**
		 * changing p(X) to p(X^pow) in Z_q[X] / (X^N + 1)
		 * @param[in] p(X) in Z_q[X] / (X^N + 1)
		 * @param[in] power pow
		 * @param[in] mod q
		 * @param[in] degree N
		 * @result p(X^pow) in Z_q[X] / (X^N + 1)
		 */
		static ZZX inpower(ZZX& p, const long& pow, ZZ& mod, const long& degree);

		//-----------------------------------------

		/**
		 * truncate p in Z[X] / (X^N + 1)
		 * @param[out] truncated p in Z_q[X] / (X^N + 1)
		 * @param[in] p in Z[X] / (X^N + 1)
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 */
		static void truncate(ZZX& res, ZZX& p, const long& logMod, const long& degree);
//		static void truncate(CZZX& res, CZZX& p, const long& logMod, const long& degree);

		/**
		 * truncate p in Z[X] / (X^N + 1)
		 * @param[in,out] p -> p in Z_q[X] / (X^N + 1)
		 * @param[in] logmod log(q)
		 * @param[in] degree N
		 */
		static void truncateAndEqual(ZZX& p, const long& logMod, const long& degree);
//		static void truncateAndEqual(CZZX& p, const long& logMod, const long& degree);

		/**
		 * truncate p in Z
		 * @param[in,out] p -> truncated p in Z_q
		 * @param[in] logmod log(q)
		 */
		static void truncate(ZZ& res, const long& logMod);
//		static void truncate(CZZ& res, const long& logMod);

		//-----------------------------------------
};

#endif /* POLYSCHEME_ZRINGUTILS_H_ */