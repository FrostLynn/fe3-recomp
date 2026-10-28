#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_01CF17F0
// Address: 0x1cf17f0 - 0x1cf1888
void sub_01CF17F0_0x1cf17f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_01CF17F0_0x1cf17f0");
#endif

    switch (ctx->pc) {
        case 0x1cf181cu: goto label_1cf181c;
        case 0x1cf1828u: goto label_1cf1828;
        case 0x1cf1864u: goto label_1cf1864;
        case 0x1cf1874u: goto label_1cf1874;
        default: break;
    }

    ctx->pc = 0x1cf17f0u;

    // 0x1cf17f0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cf17f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cf17f4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1cf17f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1cf17f8: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1cf17f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1cf17fc: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x1cf17fcu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1800: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1cf1800u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1cf1804: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1cf1804u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1cf1808: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1cf1808u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf180c: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x1cf180cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1810: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x1cf1810u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1cf1814: 0xc73bd64  jal         func_1CEF590
    ctx->pc = 0x1CF1814u;
    SET_GPR_U32(ctx, 31, 0x1CF181Cu);
    ctx->pc = 0x1CF1818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1814u;
    // 0x1cf1818: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF590u, 0x1CF1814u, 0x1CF181Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF181Cu;
label_1cf181c:
    // 0x1cf181c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1cf181cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf1820: 0xc73bd5c  jal         func_1CEF570
    ctx->pc = 0x1CF1820u;
    SET_GPR_U32(ctx, 31, 0x1CF1828u);
    ctx->pc = 0x1CF1824u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF1820u;
    // 0x1cf1824: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF570u, 0x1CF1820u, 0x1CF1828u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1828u;
label_1cf1828:
    // 0x1cf1828: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1828u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf182c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x1cf182cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x1cf1830: 0x25efd0f8  addiu       $t7, $t7, -0x2F08
    ctx->pc = 0x1cf1830u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955256));
    // 0x1cf1834: 0x8e04000c  lw          $a0, 0xC($s0)
    ctx->pc = 0x1cf1834u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x1cf1838: 0xc5e00000  lwc1        $f0, 0x0($t7)
    ctx->pc = 0x1cf1838u;
    { uint32_t bits = FAST_READ32(0x1CFD0F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1cf183c: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x1cf183cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x1cf1840: 0x3c0f01d0  lui         $t7, 0x1D0
    ctx->pc = 0x1cf1840u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)464 << 16));
    // 0x1cf1844: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x1cf1844u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x1cf1848: 0x25efd0fc  addiu       $t7, $t7, -0x2F04
    ctx->pc = 0x1cf1848u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294955260));
    // 0x1cf184c: 0xc5e10000  lwc1        $f1, 0x0($t7)
    ctx->pc = 0x1cf184cu;
    { uint32_t bits = FAST_READ32(0x1CFD0FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cf1850: 0xe7a1000c  swc1        $f1, 0xC($sp)
    ctx->pc = 0x1cf1850u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x1cf1854: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x1cf1854u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x1cf1858: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x1cf1858u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x1cf185c: 0xc73bd58  jal         func_1CEF560
    ctx->pc = 0x1CF185Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1864u);
    ctx->pc = 0x1CF1860u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF185Cu;
    // 0x1cf1860: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF560u, 0x1CF185Cu, 0x1CF1864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1864u;
label_1cf1864:
    // 0x1cf1864: 0x24440150  addiu       $a0, $v0, 0x150
    ctx->pc = 0x1cf1864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    // 0x1cf1868: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1cf1868u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1cf186c: 0xc73bd48  jal         func_1CEF520
    ctx->pc = 0x1CF186Cu;
    SET_GPR_U32(ctx, 31, 0x1CF1874u);
    ctx->pc = 0x1CF1870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CF186Cu;
    // 0x1cf1870: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1CEF520u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1CEF520u, 0x1CF186Cu, 0x1CF1874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CF1874u;
label_1cf1874:
    // 0x1cf1874: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1cf1874u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cf1878: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1cf1878u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1cf187c: 0x3e00008  jr          $ra
    ctx->pc = 0x1CF187Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CF1880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CF187Cu;
        // 0x1cf1880: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CF187Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CF1884u;
    // 0x1cf1884: 0x0  nop
    ctx->pc = 0x1cf1884u;
    // NOP
    ctx->pc = 0x1cf1888u;
}
