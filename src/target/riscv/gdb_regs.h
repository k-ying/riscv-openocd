#ifndef TARGET__RISCV__GDB_REGS_H
#define TARGET__RISCV__GDB_REGS_H

enum gdb_regno {
	GDB_REGNO_XPR0 = 0,
	GDB_REGNO_X0 = GDB_REGNO_XPR0 + 0,
	GDB_REGNO_ZERO = GDB_REGNO_XPR0 + 0,
	GDB_REGNO_S0 = GDB_REGNO_XPR0 + 8,
	GDB_REGNO_S1 = GDB_REGNO_XPR0 + 9,
	GDB_REGNO_XPR31 = GDB_REGNO_XPR0 + 31,
	GDB_REGNO_PC = 32,
	GDB_REGNO_FPR0 = 33,
	GDB_REGNO_FPR31 = GDB_REGNO_FPR0 + 31,
	GDB_REGNO_CSR0 = 65,
	GDB_REGNO_TSELECT = CSR_TSELECT + GDB_REGNO_CSR0,
	GDB_REGNO_TDATA1 = CSR_TDATA1 + GDB_REGNO_CSR0,
	GDB_REGNO_TDATA2 = CSR_TDATA2 + GDB_REGNO_CSR0,
	GDB_REGNO_MISA = CSR_MISA + GDB_REGNO_CSR0,
	GDB_REGNO_DPC = CSR_DPC + GDB_REGNO_CSR0,
	GDB_REGNO_DCSR = CSR_DCSR + GDB_REGNO_CSR0,
	GDB_REGNO_DSCRATCH = CSR_DSCRATCH + GDB_REGNO_CSR0,
	GDB_REGNO_MSTATUS = CSR_MSTATUS + GDB_REGNO_CSR0,
	GDB_REGNO_CSR4095 = GDB_REGNO_CSR0 + 4095,
	GDB_REGNO_PRIV = 4161,
	GDB_REGNO_COUNT
};

#endif